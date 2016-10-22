using System;

namespace BuilderPattern
{
    class Program
    {
        static void Main(string[] args)
        {
            var builder = new Builder();
            var director = new Director(builder);
            director.Build();

            var house = builder.GetResult();

            Console.ReadLine();
        }
    }
}