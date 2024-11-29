#include "pch.h"
#include </Учеба/ППОИС/Лабы/ППОИС_3лаба/ППОИС_3лаба/Payment.cpp>

TEST(PaymentTest, ConstructorAndGetters) {
    Payment payment(1, "John Doe", 100.50, "Credit Card");

    EXPECT_EQ(payment.getId(), 1);
    EXPECT_EQ(payment.getAmount(), 100.50);
    EXPECT_EQ(payment.getMethod(), "Credit Card");
    EXPECT_FALSE(payment.getProcessedStatus());
}

TEST(PaymentTest, ProcessPayment) {
    Payment payment(2, "Jane Smith", 50.75, "Cash");

    payment.processPayment();
    EXPECT_TRUE(payment.getProcessedStatus());
}

TEST(PaymentTest, DisplayPaymentInfo) {
    Payment payment(3, "Mark Lee", 200.00, "Debit Card");

    testing::internal::CaptureStdout();
    payment.displayPaymentInfo();
    std::string output = testing::internal::GetCapturedStdout();

    std::cout << "Captured output: " << output << std::endl; // Для отладки

    EXPECT_TRUE(output.find("Payment ID: 3") != std::string::npos);
    EXPECT_TRUE(output.find("Customer: Mark Lee") != std::string::npos);
    EXPECT_TRUE(output.find("Amount: $200") != std::string::npos); // Убедитесь, что формат совпадает
    EXPECT_TRUE(output.find("Processed: No") != std::string::npos);
}

