using System;
namespace FactoryMethodPattern
{
    class ConcreteProduct : Product
    {
        public ConcreteProduct()
        {
            Console.WriteLine(this.GetHashCode());
        }
    }
}
