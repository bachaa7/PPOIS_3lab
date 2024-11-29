#include"Library.h"
#include "Chef.h"
#include "Manager.h"
#include "Delivery.h"
#include "Menu.h"
#include "MenuItem.h"
#include "Order.h"
#include "Payment.h"
#include "Music.h"
#include "Promotion.h"
#include "Reservation.h"
#include "Restaraunt.h"
#include "Review.h"
#include "Table.h"
#include "Waiter.h"



int main() {


    Restaraunt restaurant("123 Food St, City", "Gourmet Bistro", "123-456-7890");

    Chef chef (1, "John Doe", 5000.0, "Italian Cuisine");
    Manager manager(2, "Jane Smith", 6000.0, "Customer Service");
    Waiter waiter(3, "Alex Brown", 2500.0, "Serving");

    chef.displayRole();
    manager.displayRole();
    waiter.displayRole();

    Menu menu;
    MenuItem pizza("Pizza", "Delicious cheese pizza", 12.99);
    MenuItem burger("Burger", "Beef burger with fries", 8.99);
    MenuItem pasta("Pasta", "Spaghetti with marinara sauce", 10.50);

    menu.addItem(pizza);
    menu.addItem(burger);
    menu.addItem(pasta);

    menu.displayMenu();

    Promotion promo;
    promo.applyPromoCode("SAVE10");
    promo.displayPromotion();

    Order order(101);
    order.addItem(pizza, pizza.getDetails().find("$") != string::npos ? stod(pizza.getDetails().substr(pizza.getDetails().find("$") + 1)) : 0);
    order.addItem(burger, burger.getDetails().find("$") != string::npos ? stod(burger.getDetails().substr(burger.getDetails().find("$") + 1)) : 0);

    order.displayOrder();

    Payment payment(1, "Alex Johnson", order.calculateTotal(), "Credit Card");
    payment.processPayment();
    payment.displayPaymentInfo();

    Delivery delivery(1, "123 Main St, City", "12:30 PM", order);
    delivery.displayDeliveryInfo();
    delivery.markAsDelivered();

    Table table1(1, 4); 
    Table table2(2, 2); 

    Reservation reservation(1, "Alex Johnson", &table1, "2024-11-30", "19:00");
    reservation.display();

    Review review1(1, "Alex Johnson", "Great food, excellent service!", 5);
    Review review2(2, "Jane Doe", "Good, but could improve the atmosphere.", 3);

    review1.displayReview();
    review2.displayReview();

    waiter.serveOrder(order.getId());

    waiter.reportComplaint("Food was cold.", manager);

    Music music;
    music.play("Relaxing Jazz");
    music.stop();

    return 0;

















	return 0;
}