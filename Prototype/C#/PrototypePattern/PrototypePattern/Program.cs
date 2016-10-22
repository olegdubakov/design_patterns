using System;

namespace PrototypePattern
{
    class Program
    {
        static void Main(string[] args)
        {
            ConcretePrototype prototype1 = new ConcretePrototype(1);
            var prototype12 = prototype1.Clone();

            Console.WriteLine(prototype12.id);
        }
    }
}
