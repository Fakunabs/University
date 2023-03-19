using System;
namespace BaiTap2
{
	public class Clock
	{
		public delegate void SeconHandler(object o, TimeEventArgs e);

		public event SeconHandler OnSecondChange;

		public void Run()
		{
			while (true)
			{
				Thread.Sleep(1000);
				if(OnSecondChange != null) { }

				OnSecondChange(this, new TimeEventArgs
				{
					timer = DateTime.Now
				});
			}
		}
	}
}

