using System;

class BirthdayParadox
{
    // calculate the probability of at least two people sharing a birthday
    static double SharedBirthdayProbability(int n)
    {
        double probabilityNoSharedBirthday = 1.0;
        double daysInYear = 365.0;

        // generate product for P(number shared birthday)
        for (int i = 0; i < n; i++)
        {
            probabilityNoSharedBirthday *= (daysInYear - i) / daysInYear;
        }
        return 1.0 - probabilityNoSharedBirthday;
    }

    // (a) generate the probability for 20 people
    static void ComputeFor20People()
    {
        int n = 20;
        double probability = SharedBirthdayProbability(n);
        Console.WriteLine($"Probability of shared birthday for {n} people: {probability:F6}");
    }

    // (b) Generalize and print probability for n = 11 to 50
    static void PrintProbabilityForRange()
    {
        Console.WriteLine("Printing out probabilities of 2 identical birthdays for 11 to 50 people:");

        for (int n = 11; n <= 50; n++)
        {
            double probability = SharedBirthdayProbability(n);
            Console.Write($"{probability:F6} ");
            if ((n - 10) % 5 == 0)
            {
                Console.WriteLine();
            }
        }
        Console.WriteLine();
    }

    // (c) Find the smallest n such that probability > 0.90
    static void FindFirstNWithHighProbability()
    {
        for (int n = 30; n <= 45; n++)
        {
            double probability = SharedBirthdayProbability(n);

            if (probability > 0.90)
            {
                Console.WriteLine($"The first n such that probability is greater than 0.90 is {n}");
                break; // Exit the loop once result is located
            }
        }
    }

    static void Main()
    {
        // (a)
        ComputeFor20People();

        //  (b)
        PrintProbabilityForRange();

        // (c)
        FindFirstNWithHighProbability();
    }
}
