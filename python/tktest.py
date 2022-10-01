import tkinter as tk

window = tk.Tk()
start = tk.Label(text="Welcome!")
start.pack()

button = tk.Button(text="Click me!",
                   width=25,
                   height=8,
                   bg="#7ca2de",
                   fg="white")
button.pack()

entry_label = tk.Label(text="Enter number to sqrt:", pady=10)
entry = tk.Entry(width=50)
entry_label.pack()
entry.pack()

val = entry.get()
ans_label = tk.Label(text=f"The sqrt of {val} is:")
# ans = tk.Label(text=f"{float(val)**0.5}")
ans_label.pack()
# ans.pack()

window.mainloop()
"""
got up to creating entry boxes in tkinter. need to learn how to show certain things after entry has been entered. possibly with button? :)
"""
