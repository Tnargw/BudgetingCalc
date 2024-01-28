#pragma once
namespace MathNamespace {

    class Math {
    public:
        // Constructor
        Math();

        // Destructor
        ~Math();

        // Basic arithmetic operations
        int add() const;
        // You can add other operations here if needed

        // Setters for input values
        void setInputA(System::String^ text);
        void setInputB(System::String^ text);

    public:
        int inputA;
        int inputB;

        // Function to convert System::String to int
        int ConvertStringToInt(System::String^ str);


    
    };
};