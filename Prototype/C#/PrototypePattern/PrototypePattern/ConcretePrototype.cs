namespace PrototypePattern
{
    class ConcretePrototype : Prototype
    {
        public ConcretePrototype(int id)
            : base(id)
        {
        }

        public override Prototype Clone()
        {
            return new ConcretePrototype(this.id);
        }
    }
}
