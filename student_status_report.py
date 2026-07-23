# 1. Hyperparameters and Configuration (Dictionary)
config = {
    "passing_threshold": 70,
    "warning_threshold": 50,
    "course_name": "Intro to Machine Learning"
}

# 2. Sequential Data Points (List of Dictionaries)
students = [
    {"name": "Alice", "score": 88},
    {"name": "Bob", "score": 64},
    {"name": "Charlie", "score": 45},
    {"name": "Diana", "score": 92},
    {"name": "Ethan", "score": 55}
]

print(f"Academic Status Report: {config['course_name']}")

# 3. Iterating through data (For Loop)
for student in students:
    name = student["name"]
    score = student["score"]
    
    # 4. Decision Logic (Conditionals)
    if score >= config["passing_threshold"]:
        status = "Passed"
    elif score >= config["warning_threshold"]:
        status = "Academic Warning (Needs Improvement)"
    else:
        status = "Failed (Must Retake Course)"
        
    print(f"Student: {name:<8} | Score: {score} | Status: {status}")
