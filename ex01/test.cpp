#include <iostream>
#include <iomanip>


int main(void) {
    std::cout << "space.. :";
    std::cout.setf(std::ios::right, std::ios::adjustfield);
    std::cout.width(50);
    std::cout << "This text is right justified" << std::endl;
    std::cout.setf(std::ios::right, std::ios::adjustfield);
    std::cout.width(50);
    std::cout << "This text is right justified" << std::endl;
    std::cout << "This text is left justified again" << std::endl;

    std::cout << std::left << "tet    22" << std::right << 500 << " pcs" << std::endl;
    std::cout << std::left << "tet  1" << std::right << 3000 << " pcs" << std::endl;
    std::cout << std::left << "tet     " << std::right << 24500 << " pcs" << std::endl;

    std::cout << std::left << std::setfill('.') << std::setw(20) << "Flour" << std::right << std::setfill('.') << std::setw(20) << 0.7 << " kg" << std::endl;
    std::cout << std::left << std::setfill('.') << std::setw(20) << "Honey" << std::right << std::setfill('.') << std::setw(20) << 2 << " Glasses" << std::endl;
    std::cout << std::left << std::setfill('.') << std::setw(20) << "Noodles" << std::right << std::setfill('.') << std::setw(20) << 800 << " g" << std::endl;
    std::cout << std::left << std::setfill('.') << std::setw(20) << "Beer" << std::right << std::setfill('.') << std::setw(20) << 20 << " Bottles" << std::endl;
return 0;
}