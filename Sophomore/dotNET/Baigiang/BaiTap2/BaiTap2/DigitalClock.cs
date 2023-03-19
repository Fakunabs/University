using System;
namespace BaiTap2
{
	public class DigitalClock
	{
        public void ShowDC(object o, TimeEventArgs e)
        {
             
            Console.WriteLine("DC: {0}:{1}:{2}:{3}",
            e.timer.Hour, e.timer.Minute, e.timer.Second, e.timer.Millisecond);
        }
    }
}

