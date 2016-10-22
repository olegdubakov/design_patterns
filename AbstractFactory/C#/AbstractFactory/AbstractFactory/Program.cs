using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory
{
    class Program
    {
        static void Main(string[] args)
        {
            var pepsi = new Client(new PepsiFactory());
            pepsi.Run();

            var cocaCola = new Client(new CocaColaFactory());
            cocaCola.Run();
        }
    }
}
