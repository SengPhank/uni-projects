# payroll_calculator.py
TAX_RATE = 0.2

def calculate_pay(hours, rate):
    if hours < 0 or rate < 0:
        raise ValueError("Hours and rate must be positive.")
    gross = hours * rate
    tax = gross * TAX_RATE
    net = gross - tax
    return net

def main():
    name = input("Enter employee name: ")
    hours = float(input("Hours worked: "))
    rate = float(input("Hourly rate: "))
    net_pay = calculate_pay(hours, rate)
    print(f"{name} earned ${net_pay:.2f} after tax.")

if __name__ == "__main__":
    main()