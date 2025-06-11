import os
from Bio.Seq import Seq
from Bio.SeqRecord import SeqRecord
from Bio import SeqIO

# Define DNA sequence
dna_sequence = Seq("ATGCGTACGTAGCTAGCTAG")
record = SeqRecord(
    dna_sequence,
    id="seq1",
    name="Example_Gene",
    description="Example gene sequence",
    annotations={
        "molecule_type": "DNA",
        "gene": "ExampleGene",
        "function": "Hypothetical protein",
    },
)

# Set output directory to the user's Downloads folder
output_directory = os.path.expanduser("C:/Users/UMAR/Downloads/")
os.makedirs(output_directory, exist_ok=True)  # Ensure the directory exists

# Set output file path
output_file_path = os.path.join(output_directory, "q4_genbank.gb")

# Try writing the GenBank file
try:
    with open(output_file_path, "w") as output_file:
        SeqIO.write(record, output_file, "genbank")
    print("GenBank file written successfully at:", output_file_path)
except IOError as e:
    print(f"Error writing GenBank file: {e}")

# Try reading the GenBank file
try:
    with open(output_file_path, "r") as input_file:
        record_read = SeqIO.read(input_file, "genbank")
        print("\nContents of GenBank file:")
        print(record_read)
except FileNotFoundError:
    print("Error: GenBank file not found.")
except IOError as e:
    print(f"Error reading GenBank file: {e}")
