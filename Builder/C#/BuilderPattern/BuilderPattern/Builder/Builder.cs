namespace BuilderPattern
{
    class Builder : AbstractBuilder
    {
        private House house;

        public Builder()
        {
            house = new House();
        }
        public override void BuildBasement()
        {
            house.Add(new Basement());
        }

        public override void BuildStorey()
        {
            house.Add(new Storey());
        }

        public override void BuildRoof()
        {
            house.Add(new Roof());
        }

        public override House GetResult()
        {
            return house;
        }
    }
}
