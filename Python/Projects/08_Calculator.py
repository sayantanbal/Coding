import tkinter as tk
import math

def on_button_click(value):
    current_text = entry.get()
    entry.delete(0, tk.END)
    entry.insert(tk.END, current_text + str(value))

def clear_entry(event=None):
    entry.delete(0, tk.END)

def calculate(event=None):
    try:
        result = eval(entry.get())
        entry.delete(0, tk.END)
        entry.insert(tk.END, str(result))
    except Exception as e:
        entry.delete(0, tk.END)
        entry.insert(tk.END, "Error")

def scientific_function(func, event=None):
    try:
        value = eval(entry.get())
        result = func(math.radians(value) if func in (math.sin, math.cos, math.tan) else value)
        entry.delete(0, tk.END)
        entry.insert(tk.END, str(result))
    except Exception as e:
        entry.delete(0, tk.END)
        entry.insert(tk.END, "Error")

# Create the main window
window = tk.Tk()
window.title("Scientific Calculator")
window.geometry("600x600")

# Entry widget for display
entry = tk.Entry(window, width=45, font=('Arial', 20), borderwidth=2, relief="solid", bg='lightgray')
entry.grid(row=0, column=0, columnspan=8, pady=10, sticky="news")

# Configure row and column weights
for i in range(8):
    window.grid_rowconfigure(i, weight=1)
    window.grid_columnconfigure(i, weight=1)

# Button layout
buttons = [
    ('7', 6, 0), ('8', 6, 1), ('9', 6, 2), ('/', 6, 3),
    ('4', 5, 0), ('5', 5, 1), ('6', 5, 2), ('*', 5, 3),
    ('1', 4, 0), ('2', 4, 1), ('3', 4, 2), ('-', 4, 3),
    ('0', 7, 0), ('C', 7, 1), ('=', 7, 2), ('+', 7, 3),
    ('.', 7, 4), ('sin', 1, 5), ('cos', 2, 5), ('tan', 3, 5),
    ('(', 1, 6), (')', 2, 6), ('sqrt', 3, 6), ('log', 4, 6),
    ('pi', 5, 5), ('exp', 6, 5), ('^', 7, 5), ('abs', 7, 4),
]

# Create buttons and add them to the grid
for (text, row, col) in buttons:
    if text == 'C':
        button = tk.Button(window, text=text, width=5, height=2, command=clear_entry, bg='orange')
        button.grid(row=row, column=col, sticky="news")
    elif text == '=':
        button = tk.Button(window, text=text, width=5, height=2, command=calculate, bg='green', fg='white')
        button.grid(row=row, column=col, sticky="news")
        window.bind('<Return>', calculate)
    elif text in ('sin', 'cos', 'tan', 'sqrt', 'log', 'exp', 'abs'):
        button = tk.Button(window, text=text, width=5, height=2, command=lambda func=text: scientific_function(getattr(math, func)), bg='lightblue')
        button.grid(row=row, column=col, sticky="news")
    elif text == 'pi':
        button = tk.Button(window, text='π', width=5, height=2, command=lambda: on_button_click('pi'), bg='lightblue')
        button.grid(row=row, column=col, sticky="news")
    elif text == '^':
        button = tk.Button(window, text=text, width=5, height=2, command=lambda: on_button_click('**'), bg='lightblue')
        button.grid(row=row, column=col, sticky="news")
    else:
        button = tk.Button(window, text=text, width=5, height=2, command=lambda value=text: on_button_click(value), bg='lightgray')
        button.grid(row=row, column=col, sticky="news")

# Make buttons resize with the window
for i in range(8):
    window.grid_rowconfigure(i, weight=1)
    window.grid_columnconfigure(i, weight=1)

# Bind keyboard events to functions
window.bind('<Key>', lambda event: on_button_click(event.char))

# Run the main loop
window.mainloop()