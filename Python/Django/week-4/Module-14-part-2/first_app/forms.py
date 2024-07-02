from django import forms
from .models import StudentModel


class StudentForm(forms.ModelForm):
    class Meta:
        model = StudentModel
        # exclude = ['roll']
        fields = "__all__"
        labels = {
            "name": "student name",
            "roll": "student roll",
        }
        widgets = {
            "name": forms.TextInput(attrs={"class": " btn btn-primary"}),
            "roll": forms.PasswordInput()
        }
        help_texts={
            'name': 'write your full name',
            "roll": 'enter your roll number'
        }
        error_messages = {"name": {"required": "your name is required!"}}
