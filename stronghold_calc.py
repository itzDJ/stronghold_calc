def main():
    # importing the tangent trig function and pi value
    from math import tan, pi

    try:
        # getting values for the coordinates and angles
        x1 = float(input("Name your x1 value: "))
        z1 = float(input("Name your z1 value: "))
        f1 = float(input("Name your f1 value: "))
        x2 = float(input("Name your x2 value: "))
        z2 = float(input("Name your z2 value: "))
        f2 = float(input("Name your f2 value: "))
    except ValueError:
        # runs if the try block returns an error and ends the program
        # the only error that can occur in the try block:
        #   if the input cannot be converted into a float (ex: if the input is not a number)
        print("That is not a number.")
    else:
        # runs if the try block runs successfully
        # solving for x and z coordinates of the stronghold
        z = ((z1 * tan(-f1*pi/180)) - (z2 * tan(-f2*pi/180)) - x1 + x2) / (tan(-f1*pi/180) - tan(-f2*pi/180))

        x = (z - z1) * tan(-f1*pi/180) + x1

        # output results
        print(f"\nThe stronghold is at {round(x), round(z)}.")


if __name__ == "__main__":
    main()
