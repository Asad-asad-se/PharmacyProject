# Pharmacy Billing System (C++)

A console-based pharmacy billing application written in C++. It displays a menu of medicine items with unit price and available stock, takes customer orders, validates stock availability, and generates a final bill with tiered discounts and tax applied.

## Features

- **Inventory Display** — Lists 10 pharmacy items (Paracetamol, Aspirin, Insulin, Augmentin, etc.) with unit price and current stock in a formatted table.
- **Order Entry** — Accepts multiple item orders by item number and desired quantity.
- **Stock Validation** — Rejects orders that exceed available stock and re-prompts until a valid quantity is entered.
- **Invalid Item Handling** — Re-prompts if an invalid item number is entered.
- **Order Summary** — Prints an itemized bill showing item name, quantity, and price per line item.
- **Tiered Discounts**
  - 5% off orders between Rs. 5,000 and Rs. 9,999
  - 10% off orders of Rs. 10,000 and above
- **Tax Calculation** — Applies 8% tax on the (post-discount) subtotal.
- **Final Bill** — Displays the total payable amount in PKR.

## How It Works

1. The program prints the available items with prices and stock.
2. The user is asked how many items they want to purchase.
3. For each item, the user enters the item number and quantity — invalid entries are caught and re-prompted.
4. Once all items are entered, the program prints an order summary.
5. It calculates the subtotal, applies the applicable discount tier, adds 8% tax, and prints the final bill.

## Getting Started

### Prerequisites
- A C++ compiler (e.g. `g++`)

### Compile & Run
```bash
g++ PharmacyProject.cpp -o PharmacyProject
./PharmacyProject
```

On Windows:
```bash
g++ PharmacyProject.cpp -o PharmacyProject.exe
PharmacyProject.exe
```

## Sample Interaction

```
Items                     Unit Price   Available Stock
1.  Paracetamol           1000         350
2.  Aspirin               1250         150
...
Enter number of items to be purchased = 2
Enter Your Order 1 = 1
Enter Quanitity of Paracetamol = 5
Your order is placed!
...
Total = 6250
Discount = 5%
Price after discount = 5937
TAX = 8%
Final Bill = 6412 Rs.
```

## Tech Stack
- **Language:** C++
- **Libraries used:** `iostream`, `string`, `iomanip`

## Author
Muhammad Asad Ullah
