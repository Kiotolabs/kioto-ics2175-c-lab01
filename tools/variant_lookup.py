"""
ICS 2175 Laboratory 01
Personalised variant lookup helper.
"""

import argparse
import hashlib

VARIANTS = [
    {"id": "V01", "scenario": "Stationery order cost", "a": 25, "b": 6, "label": "Total cost"},
    {"id": "V02", "scenario": "Stationery order cost", "a": 15, "b": 12, "label": "Total cost"},
    {"id": "V03", "scenario": "Stationery order cost", "a": 40, "b": 4, "label": "Total cost"},
    {"id": "V04", "scenario": "Event ticket revenue", "a": 500, "b": 80, "label": "Total revenue"},
    {"id": "V05", "scenario": "Event ticket revenue", "a": 250, "b": 120, "label": "Total revenue"},
    {"id": "V06", "scenario": "Event ticket revenue", "a": 1000, "b": 35, "label": "Total revenue"},
    {"id": "V07", "scenario": "Agricultural plot area", "a": 30, "b": 20, "label": "Plot area"},
    {"id": "V08", "scenario": "Agricultural plot area", "a": 45, "b": 15, "label": "Plot area"},
    {"id": "V09", "scenario": "Agricultural plot area", "a": 22, "b": 18, "label": "Plot area"},
    {"id": "V10", "scenario": "Printing costs", "a": 120, "b": 2, "label": "Printing cost"},
    {"id": "V11", "scenario": "Printing costs", "a": 75, "b": 5, "label": "Printing cost"},
    {"id": "V12", "scenario": "Printing costs", "a": 200, "b": 1, "label": "Printing cost"},
    {"id": "V13", "scenario": "Total computer workstations", "a": 25, "b": 4, "label": "Total workstations"},
    {"id": "V14", "scenario": "Total computer workstations", "a": 30, "b": 3, "label": "Total workstations"},
    {"id": "V15", "scenario": "Total computer workstations", "a": 20, "b": 6, "label": "Total workstations"},
    {"id": "V16", "scenario": "Distance travelled", "a": 60, "b": 2.5, "label": "Distance"},
    {"id": "V17", "scenario": "Distance travelled", "a": 40, "b": 3, "label": "Distance"},
    {"id": "V18", "scenario": "Distance travelled", "a": 55, "b": 1.5, "label": "Distance"},
    {"id": "V19", "scenario": "Study hours", "a": 3, "b": 7, "label": "Total study hours"},
    {"id": "V20", "scenario": "Study hours", "a": 2, "b": 14, "label": "Total study hours"},
    {"id": "V21", "scenario": "Study hours", "a": 4, "b": 5, "label": "Total study hours"},
    {"id": "V22", "scenario": "Water tank base area", "a": 1.5, "b": 1.2, "label": "Base area"},
    {"id": "V23", "scenario": "Water tank base area", "a": 2.0, "b": 1.8, "label": "Base area"},
    {"id": "V24", "scenario": "Water tank base area", "a": 3.0, "b": 2.5, "label": "Base area"},
]


def variant_for(identifier):
    digest = hashlib.sha256(identifier.strip().encode()).hexdigest()
    index = int(digest, 16) % len(VARIANTS)
    return VARIANTS[index]


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--id", required=True)
    args = parser.parse_args()

    variant = variant_for(args.id)

    print("Your personalised variant")
    print("========================")
    print(f"Registration number: {args.id}")
    print(f"Variant ID: {variant['id']}")
    print(f"Scenario: {variant['scenario']}")
    print(f"Input value 1: {variant['a']}")
    print(f"Input value 2: {variant['b']}")
    print("Operation: multiply")
    print(f"Required output label: {variant['label']}")


if __name__ == "__main__":
    main()