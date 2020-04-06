# CS50-problem-set-1-solution
CS50 problem set 1 my solution just for my own practice

## Assumption for Credit Card Challenge

* American Express uses 15-digits
* MasterCard uses       16-digits
* Visa uses             16-digits

---

* American express card start with    34 or 37
* Mastercard starts with              51, 52, 53, 54, 55
* Visa numbers start with             4

## Luhn's Algorithm
Algorithm by Hans Peter Luhn of IBM

1. Multiplay every other digit by 2, starting with number's second to last digit
2. Then add those products digits together
3. Add the sum to the sum of digits that weren't multiplied by 2
4. if the total's last digit is 0, number is valid.

