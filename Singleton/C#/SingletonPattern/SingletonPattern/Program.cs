using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SingletonPattern
{
    class Program
    {
        static void Main(string[] args)
        {
            var singleton1 = Singleton.Instance();
            var singleton2 = Singleton.Instance();

            singleton1.SetSingletonData("test");

            Console.WriteLine(singleton2.GetSingletonData());
        }
    }
}
