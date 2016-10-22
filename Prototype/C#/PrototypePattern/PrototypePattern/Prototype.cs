namespace PrototypePattern
{
    abstract class Prototype
    {
        public int id { get; set; }

        public Prototype(int id)
        {
            this.id = id;
        }

        public abstract Prototype Clone();
    }
}
