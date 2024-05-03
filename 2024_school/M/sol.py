def is_happy_number(num):
    seen = set()
    while num != 1:
        num = sum(int(i) ** 2 for i in str(num))
        if num in seen:
            return False
        seen.add(num)
    return True

num = int(input("請輸入一個數字："))
if is_happy_number(num):
    print(num, "是快樂數。")
else:
    print(num, "不是快樂數。")

