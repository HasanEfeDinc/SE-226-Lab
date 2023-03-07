#Q3
name = input("Name: ")
Labgrade = float(input("Lab: "))
Midtermgrade = float(input("Midterm: "))
Finalgrade = float(input("Final: "))

Score = (Labgrade * 0.25) + (Midtermgrade * 0.35) + (Finalgrade * 0.4)

print(str(name) + " " + str(Score)) #idk making these str is true but it works