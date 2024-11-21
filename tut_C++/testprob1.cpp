#include <iostream>

class MegaStore
{
public:
    enum DiscountType 
    {
        Standard,
        Seasonal,
        Weight
    };

    static double getDiscountedPrice(double cartWeight, double totalPrice, DiscountType discountType)
    {
        if (discountType==Standard) totalPrice=totalPrice*(0.94);
        else if (discountType==Seasonal) totalPrice=totalPrice*(0.88);
        else if (discountType==Weight) {
            if (cartWeight<=10) totalPrice=totalPrice*0.94;
            else if (cartWeight>10) totalPrice=totalPrice*(0.82);
        }
        return totalPrice;
    }
};

#ifndef RunTests
int main()
{
    std::cout << MegaStore::getDiscountedPrice(12, 100, MegaStore::DiscountType::Weight);
    return 0;
}
#endif