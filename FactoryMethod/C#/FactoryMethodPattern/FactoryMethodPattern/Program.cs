﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FactoryMethodPattern
{
    class Program
    {
        static void Main(string[] args)
        {
            Product product = null;
            Factory factory = null;

            factory = new ConcreteFactory();
            product = factory.FactoryMethod();
        }
    }
}
