import random

for i in range(10):
    heart_rate = random.randint(50, 120)
    spo2 = random.randint(85, 100)

    print(f"Heart Rate: {heart_rate}, SpO2: {spo2}")

    if heart_rate < 55 or heart_rate > 110 or spo2 < 90:
        print("ALERT: Abnormal Condition")
