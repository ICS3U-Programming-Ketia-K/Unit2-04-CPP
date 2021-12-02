// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Date: Dec 1, 2021
// This program asks the user for the diameter of the
// pizza. It then calculates and displays the total cost
// of the pizza with tax
#include<iomanip>
#include <iostream>

int main() {
  // declare constants
  const float HST = 0.13;
  const float LABOUR_COST = 2.00;
  const float RENTAL_COST = 2.25;
  const float INGRED_COST = 1.5;

  // declare variables
  float diameter, subtotal, tax, totalcost;

  // get the diamter from the user
  std::cout << "Enter the diameter of the pizza (inches): ";
  std::cin >> diameter;

  // calculate the subtotal
  subtotal = LABOUR_COST + RENTAL_COST + diameter * INGRED_COST;
  tax = HST * subtotal;
  totalcost = subtotal + tax;

  // display the total cost to the user
  std::cout << "\n";
  std::cout << "The total cost is = "
  << std::setprecision(2) << std::fixed << totalcost <<  "$" << std::endl;
}
