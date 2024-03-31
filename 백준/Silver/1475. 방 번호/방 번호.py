room_number = input()
num_count = [0] * 10

for digit in room_number:
    num_count[int(digit)] += 1

six_nine_count = num_count[6] + num_count[9]
if six_nine_count % 2 == 0:
    num_count[6] = six_nine_count // 2
    num_count[9] = six_nine_count // 2
else:
    num_count[6] = six_nine_count // 2 + 1
    num_count[9] = six_nine_count // 2 + 1

max_count = max(num_count[:6] + num_count[7:])

print(max_count) 
