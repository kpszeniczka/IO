#include <iostream>
#include <string>
// Product class
class Pizza {
public:
    void setDough(const std::string& dough)
    {
        this->dough = dough;
    }
    void setSauce(const std::string& sauce)
    {
        this->sauce = sauce;
    }
    void setTopping(const std::string& topping)
    {
        this->topping = topping;
    }
    void displayPizza() const
    {
        std::cout << "Pizza with Dough: " << dough
            << ", Sauce: " << sauce
            << ", Topping: " << topping << std::endl;
    }

private:
    std::string dough;
    std::string sauce;
    std::string topping;
};

// Abstract builder class
class PizzaBuilder {
public:
    virtual void buildDough() = 0;
    virtual void buildSauce() = 0;
    virtual void buildTopping() = 0;
    virtual Pizza getPizza() const = 0;
};

// Concrete builder for a vegetarian pizza
class VegetarianPizzaBuilder : public PizzaBuilder {
public:
    void buildDough() override
    {
        pizza.setDough("Whole Wheat Dough");
    }
    void buildSauce() override
    {
        pizza.setSauce("Tomato Basil Sauce");
    }
    void buildTopping() override
    {
        pizza.setTopping("Mushrooms, Bell Peppers, and Olives");
    }
    Pizza getPizza() const override { return pizza; }

private:
    Pizza pizza;
};

// Concrete builder for a meat lover's pizza
class PszeniczkaPizzaBuilder : public PizzaBuilder {
public:
    void buildDough() override
    {
        pizza.setDough("Classic Dough");
    }
    void buildSauce() override
    {
        pizza.setSauce("Garlic Alfredo Sauce");
    }
    void buildTopping() override
    {
        pizza.setTopping("Pepperoni, Sausage, and Bacon");
    }
    Pizza getPizza() const override { return pizza; }

private:
    Pizza pizza;
};

// Director class that orchestrates the construction
class Cook {
public:
    void makePizza(PizzaBuilder& builder)
    {
        builder.buildDough();
        builder.buildSauce();
        builder.buildTopping();
    }
};

int main()
{
    Cook cook;

    VegetarianPizzaBuilder vegetarianBuilder;
    cook.makePizza(vegetarianBuilder);
    Pizza vegetarianPizza = vegetarianBuilder.getPizza();
    std::cout << "Vegetarian Pizza Configuration:" << std::endl;
    vegetarianPizza.displayPizza();

    PszeniczkaPizzaBuilder PszeniczkaBuilder;
    cook.makePizza(PszeniczkaBuilder);
    Pizza PszeniczkaPizza = PszeniczkaBuilder.getPizza();
    std::cout << "\nPszeniczka Pizza Configuration:" << std::endl;
    PszeniczkaPizza.displayPizza();

    return 0;
}