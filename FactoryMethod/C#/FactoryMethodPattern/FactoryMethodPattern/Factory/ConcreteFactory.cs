using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FactoryMethodPattern
{
    class ConcreteFactory : Factory
    {
        public override Product FactoryMethod()
        {
            return new ConcreteProduct();
        }
    }
}
