import PyPDF2
import tkinter as tk
from tkinter import filedialog

def merge_pdfs(input_pdfs, output_pdf):
    pdf_merger = PyPDF2.PdfMerger()

    for pdf in input_pdfs:
        pdf_merger.append(pdf)

    with open(output_pdf, 'wb') as merged_pdf:
        pdf_merger.write(merged_pdf)

def select_pdfs():
    pdfs = filedialog.askopenfilenames(filetypes=[("PDF Files", "*.pdf")])
    return pdfs

def select_output_path():
    output_path = filedialog.asksaveasfilename(defaultextension=".pdf", filetypes=[("PDF Files", "*.pdf")])
    return output_path

def merge_pdfs_gui():
    root = tk.Tk()
    root.withdraw()  # Hide the main window

    # Get the number of PDFs to merge from the user
    num_pdfs = int(input("How many PDFs do you want to merge? "))

    # Get the file paths for each PDF from the user using GUI
    input_pdfs = []
    for i in range(num_pdfs):
        pdf_path = select_pdfs()
        input_pdfs.extend(pdf_path)

    # Get the output PDF file path from the user using GUI
    output_pdf = select_output_path()

    # Merge the PDFs
    merge_pdfs(input_pdfs, output_pdf)

    print(f"PDFs merged successfully. Output saved to {output_pdf}")

if __name__ == "__main__":
    merge_pdfs_gui()