
def main():

    couter = 0

    input_num_message = input("enter the num:")
    for i in input_num_message:
        if i == "3":    
            couter += 1
    print("thg amount of the '3' = %d" % couter)


if __name__ == "__main__":
    main()
