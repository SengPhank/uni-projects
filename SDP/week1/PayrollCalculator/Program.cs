class Program
{
    static double TAX_RATE = 0.2F;
    static void Main(string[] args)
    {
        // Take user input
        string? name;
        double hours, rate;

        // get Name
        Console.Write("Enter employee name: ");
        name = Console.ReadLine();

        // Get hours
        Console.Write("Hours worked: ");
        if (!double.TryParse(Console.ReadLine(), out hours)) return;
        

        // Get Rate
        Console.Write("Hourly rate: ");
        if (!double.TryParse(Console.ReadLine(), out rate)) return;

        double net_pay = calculate_pay(hours, rate);
        Console.WriteLine(name + " earned " + $"{net_pay:F2}" + " after tax.");
    }
    static double calculate_pay(double hours, double rate)
    {
        if (hours < 0.0F || rate < 0.0F)
        {
            throw new ArgumentException("Hours and rate must be positive.");
        }
        double gross = hours*rate;
        double tax = gross * TAX_RATE;
        double net = gross - tax;
        return net;
    }
}