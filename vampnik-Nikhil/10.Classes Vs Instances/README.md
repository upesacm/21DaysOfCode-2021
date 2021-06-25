
# Question

https://www.hackerrank.com/challenges/30-class-vs-instance/problem?h_r=email&unlock_token=54b7950e5a574a0345d5b33103ab26801066cf27&utm_campaign=30_days_of_code_continuous&utm_medium=email&utm_source=daily_reminder



Solution
-------------
Used the basic concept of Classes and Instances.

	class Person:
		def __init__(self, initialAge):
			if(initialAge < 0):
				print("Age is not valid, setting age to 0.")
				self.age = 0
			else:
				self.age = initialAge

		def amIOld(self):
			if self.age >= 18:
				print("You are old.")
			elif self.age >= 13:
				print("You are a teenager.")
			else:
				print("You are young.")

		def yearPasses(self):
			self.age += 1
