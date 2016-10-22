using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SingletonPattern
{
    class Singleton
    {
        static Singleton uniqueInstance;
        string singletonData = string.Empty;

        protected Singleton()
        {
            
        }

        public static Singleton Instance()
        {
            if (uniqueInstance == null)
            {
                uniqueInstance = new Singleton();
            }

            return uniqueInstance;
        }

        public void SetSingletonData(string singletonData)
        {
            this.singletonData = singletonData;
        }

        public string GetSingletonData()
        {
            return singletonData;
        }

    }
}
