#include "Math.h"

namespace MathNamespace {


    // Constructor
    Math::Math() : inputA(0), inputB(0) {
        // Initialization if needed
    }
    // Destructor
    Math::~Math() {
        // Cleanup if needed
    }

    int Math::add() const {
        return inputA + inputB;
    }

    // Setters for input values
    void Math::setInputA(System::String^ text) {
        inputA = ConvertStringToInt(text);
    }

    void Math::setInputB(System::String^ text) {
        inputB = ConvertStringToInt(text);
    }

    // Function to convert System::String to int
    int Math::ConvertStringToInt(System::String^ input) {

        try {
            int result = (System::Convert::ToInt16(input));
            return result;
        }
        catch (const System::FormatException^ e) {
            // Handle invalid argument (e.g., if the conversion fails)
            return 0; // Default value, you can choose another value or throw an exception
        }
        catch (const System::OverflowException^ e) {
            // Handle out-of-range (e.g., if the conversion results in an overflow)
            return 0; // Default value, you can choose another value or throw an exception
        }
    }

};