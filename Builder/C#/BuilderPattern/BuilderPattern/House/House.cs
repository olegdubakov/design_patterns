using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuilderPattern
{
    class House
    {
        List<object> houseParts = new List<object>();

        public void Add(object part)
        {
            houseParts.Add(part);
        }
    }
}
