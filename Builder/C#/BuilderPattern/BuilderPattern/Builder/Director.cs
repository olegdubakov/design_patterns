namespace BuilderPattern
{
    class Director
    {
        AbstractBuilder builder;

        public Director(AbstractBuilder builder)
        {
            this.builder = builder;
        }

        public void Build()
        {
            this.builder.BuildBasement();
            this.builder.BuildStorey();
            this.builder.BuildRoof();
        }
    }
}
