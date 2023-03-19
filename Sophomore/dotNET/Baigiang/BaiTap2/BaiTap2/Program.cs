using System;
namespace BaiTap2
{
	public class Program
	{
		static void Main()
		{
			Clock c = new Clock();
			AnalogClock ac = new AnalogClock();
			DigitalClock dc = new DigitalClock();

			c.OnSecondChange += new Clock.SeconHandler(ac.ShowAC);
            c.OnSecondChange += new Clock.SeconHandler(dc.ShowDC);

			c.Run();
        }
	}
}

