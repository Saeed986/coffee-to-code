import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

raw_epochs = [1, 2, 3, 4, 5]
raw_loss = [0.85, 0.62, 0.41, 0.28, 0.15]
raw_accuracy = [0.55, 0.68, 0.79, 0.88, 0.94]

# Convert lists to NumPy arrays
epochs_arr = np.array(raw_epochs)
loss_arr = np.array(raw_loss)
accuracy_arr = np.array(raw_accuracy)

# Vectorized operation: Convert accuracy to percentage (0.55 -> 55.0%)
accuracy_pct = accuracy_arr * 100 

# 2. Pandas: Structure into a DataFrame and calculate basic statistics
data = {
    "Epoch": epochs_arr,
    "Loss": loss_arr,
    "Accuracy (%)": accuracy_pct
}

df = pd.DataFrame(data)

print("--- Model Training Summary Table ---")
print(df)
print("\n--- Basic Statistical Metrics ---")
print(f"Average Loss     : {df['Loss'].mean():.4f}")
print(f"Average Accuracy : {df['Accuracy (%)'].mean():.2f}%")
print(f"Minimum Loss     : {df['Loss'].min():.4f}")

# 3. Matplotlib: Generate a visual line plot of Loss Drop over Epochs
plt.figure(figsize=(8, 4))
plt.plot(df["Epoch"], df["Loss"], marker='o', color='crimson', linewidth=2, label="Training Loss")

plt.title("Model Loss Drop Over Epochs")
plt.xlabel("Epoch")
plt.ylabel("Loss Value")
plt.xticks(df["Epoch"])
plt.grid(True, linestyle="--", alpha=0.6)
plt.legend()

plt.show()
