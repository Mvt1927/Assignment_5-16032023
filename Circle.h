/**
 * @brief Circle class
 *
 */
class Circle
{
private:

    /**
     * @brief radius of the circle
     * 
     */
    double radius;

    /**
     * @brief PI = 3.14159
     * 
     */
    const double PI = 3.14159;

public:
    /**
     * @brief Construct a new Circle object
     *
     * @param a_radius
     */
    Circle(const double &a_radius);

    /**
     * @brief Construct a new Circle object
     *
     */
    Circle();

    /**
     * @brief Set the Radius object
     *
     * @param a_radius
     */
    void setRadius(const double &a_radius);

    /**
     * @brief Get the Radius object
     *
     * @return double
     */
    double getRadius();

    /**
     * @brief Get the Area of the circle
     *
     * @return double
     */
    double getArea();

    /**
     * @brief Get the Diameter of the circle
     *
     * @return double
     */
    double getDiameter();

    /**
     * @brief Get the Circumference of the circle
     *
     * @return double
     */
    double getCircumference();
};

Circle::Circle(const double &a_radius)
{
    radius = a_radius;
}

Circle::Circle()
{
    radius = 0;
}

void Circle::setRadius(const double &a_radius)
{
    radius = a_radius;
}

inline double Circle::getRadius()
{
    return radius;
}

inline double Circle::getArea()
{
    return PI * radius * radius;
}

inline double Circle::getDiameter()
{
    return radius * 2;
}

inline double Circle::getCircumference()
{
    return 2 * PI * radius;
}
