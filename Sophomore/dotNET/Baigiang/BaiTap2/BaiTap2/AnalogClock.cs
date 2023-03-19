using System;
namespace BaiTap2
{
	public class AnalogClock
	{
        public void ShowAC(object o, TimeEventArgs e)
        {
            DateTime d = DateTime.Now;
            Console.WriteLine("AC: {0}:{1}:{2}:{3}",
            e.timer.Hour, e.timer.Minute, e.timer.Second, e.timer.Millisecond);
        }
    }
}

