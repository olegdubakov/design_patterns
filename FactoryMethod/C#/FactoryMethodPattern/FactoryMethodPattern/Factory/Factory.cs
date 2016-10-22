namespace FactoryMethodPattern
{
    abstract class Factory
    {
        private Product product;

        public abstract Product FactoryMethod();

        public void Operation()
        {
            product = this.FactoryMethod();
        }

    }
}
