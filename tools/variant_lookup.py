#!/usr/bin/env python3
"""
Student-facing helper: look up your personalised Laboratory 01 variant.

Usage:
    python tools/variant_lookup.py --id "ENE-01-1234-26"

This prints your assigned scenario, input values, operation and required output label.
It does NOT print the expected answer: compute that yourself.

The mapping is deterministic and identical to the lecturer's assignment, so the same
registration number always yields the same variant.
"""

import argparse
import hashlib
import sys

VARIANTS = [
    {"id": "V01", "scenario": "Stationery order cost", "input_a": 25, "input_b": 6, "operation": "multiply", "label": "Total cost"},
    {"id": "V02", "scenario": "Stationery order cost", "input_a": 15, "input_b": 12, "operation": "multiply", "label": "Total cost"},
    {"id": "V03", "scenario": "Stationery order cost", "input_a": 40, "input_b": 4, "operation": "multiply", "label": "Total cost"},
    {"id": "V04", "scenario": "Event ticket revenue", "input_a": 500, "input_b": 80, "operation": "multiply", "label": "Total revenue"},
    {"id": "V05", "scenario": "Event ticket revenue", "input_a": 250, "input_b": 120, "operation": "multiply", "label": "Total revenue"},
    {"id": "V06", "scenario": "Event ticket revenue", "input_a": 1000, "input_b": 35, "operation": "multiply", "label": "Total revenue"},
    {"id": "V07", "scenario": "Agricultural plot area", "input_a": 30, "input_b": 20, "operation": "multiply", "label": "Plot area"},
    {"id": "V08", "scenario": "Agricultural plot area", "input_a": 45, "input_b": 15, "operation": "multiply", "label": "Plot area"},
    {"id": "V09", "scenario": "Agricultural plot area", "input_a": 22, "input_b": 18, "operation": "multiply", "label": "Plot area"},
    {"id": "V10", "scenario": "Printing costs", "input_a": 120, "input_b": 2, "operation": "multiply", "label": "Printing cost"},
    {"id": "V11", "scenario": "Printing costs", "input_a": 75, "input_b": 5, "operation": "multiply", "label": "Printing cost"},
    {"id": "V12", "scenario": "Printing costs", "input_a": 200, "input_b": 1, "operation": "multiply", "label": "Printing cost"},
    {"id": "V13", "scenario": "Total computer workstations", "input_a": 25, "input_b": 4, "operation": "multiply", "label": "Total workstations"},
    {"id": "V14", "scenario": "Total computer workstations", "input_a": 30, "input_b": 3, "operation": "multiply", "label": "Total workstations"},
    {"id": "V15", "scenario": "Total computer workstations", "input_a": 20, "input_b": 6, "operation": "multiply", "label": "Total workstations"},
    {"id": "V16", "scenario": "Distance travelled", "input_a": 60, "input_b": 2.5, "operation": "multiply", "label": "Distance"},
    {"id": "V17", "scenario": "Distance travelled", "input_a": 40, "input_b": 3, "operation": "multiply", "label": "Distance"},
    {"id": "V18", "scenario": "Distance travelled", "input_a": 55, "input_b": 1.5, "operation": "multiply", "label": "Distance"},
    {"id": "V19", "scenario": "Study hours", "input_a": 3, "input_b": 7, "operation": "multiply", "label": "Total study hours"},
    {"id": "V20", "scenario": "Study hours", "input_a": 2, "input_b": 14, "operation": "multiply", "label": "Total study hours"},
    {"id": "V21", "scenario": "Study hours", "input_a": 4, "input_b": 5, "operation": "multiply", "label": "Total study hours"},
    {"id": "V22", "scenario": "Water tank base area", "input_a": 1.5, "input_b": 1.2, "operation": "multiply", "label": "Base area"},
    {"id": "V23", "scenario": "Water tank base area", "input_a": 2.0, "input_b": 1.8, "operation": "multiply", "label": "Base area"},
    {"id": "V24", "scenario": "Water tank base area", "input_a": 3.0, "input_b": 2.5, "operation": "multiply", "label": "Base area"},
]


def variant_for(identifier):
    digest = hashlib.sha256(identifier.strip().encode()).hexdigest()
    idx = int(digest, 16) % len(VARIANTS)
    return VARIANTS[idx]


def main():
    parser = argparse.ArgumentParser(description="Look up your ICS 2175 Lab 01 personalised variant")
    parser.add_argument("--id", required=True, help="Your registration number")
    args = parser.parse_args()
    v = variant_for(args.id)
    print("Your personalised variant")
    print("========================")
    print(f"Registration number: {args.id}")
    print(f"Variant ID: {v['id']}")
    print(f"Scenario: {v['scenario']}")
    print(f"Input value 1: {v['input_a']}")
    print(f"Input value 2: {v['input_b']}")
    print(f"Operation: {v['operation']}")
    print(f"Required output label: {v['label']}")
    print()
    print("Compute the result yourself and print it with the required label.")


if __name__ == "__main__":
    main()
PYEOF