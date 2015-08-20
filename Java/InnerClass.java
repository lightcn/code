class Outer 
{
    int x = 3;
    class Inner 
    {
        void Method() 
        {
            System.out.println("Innner " + x);
        }
    
    }
    void function()
    {
        System.out.println("THis is OUter Class");
    }
}

class InnerClass 
{
    public static void main(String []args)
    {
        Outer.Inner in = new Outer().new Inner();
        in.Method();
    }
}
