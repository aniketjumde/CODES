from myerrors.error import InvalidNameError, InvalidRollNumberError, InvalidPercentageError

def get_rno():
    while True:
        try:
            rno = int(input("Enter the Roll Number: "))
            if rno < 1:
                raise InvalidRollNumberError("InvalidRollNumberError: Negative number not allowed")
        except InvalidRollNumberError as re:
            print(re)
        except ValueError as ve:
            print("Given number is not an integer:", ve)
        except:
            print("Unknown error!")
        else:
            # If no exception occurs, exit the loop
            return rno


def get_name():
    while True:
        try:
            name = input("Enter the name :")
            if not name.isalpha():
                raise InvalidNameError("InvalidNameError:Give character is Not a string")
        except InvalidNameError as en:
            print(en)
        except ValueError as ve:
            print("Given number is not an integer:", ve)
        except:
            print("Unknown error .!!!")
        else:
            return name


def get_percentage():
    while True:
        try:
            per = int(input("Enter the percentage: "))
            if per < 1 or per > 100:
                raise InvalidPercentageError("InvalidPercentageError: percentage between 0 to 100")
        except InvalidPercentageError as ne:
            print(ne)
        except ValueError as ve:
            print("Given number is not an percentage:", ve)
        except:
            print("Unknown error!")
        else:
            # If no exception occurs, exit the loop
            return  per
