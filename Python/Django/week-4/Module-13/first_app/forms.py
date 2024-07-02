from django import forms


# widgets == field to html input
class contactForm(forms.Form):
    name = forms.CharField(
        label="user name",
        initial="asru",
        help_text="type your opinion",
        required=False,
        widget=forms.Textarea,
    )
    # email = forms.EmailField(label='user email')
    # file = forms.FileField()
    age = forms.CharField(widget=forms.NumberInput)
    """
    birthday = forms.DateField(widget=forms.DateInput(attrs={"type": "date"}))
    appointment = forms.DateTimeField(
        widget=forms.DateInput(attrs={"type": "datetime-local"})
    )
    """
    birthday = forms.CharField(widget=forms.DateInput(attrs={"type": "date"}))
    appointment = forms.CharField(
        widget=forms.DateInput(attrs={"type": "datetime-local"})
    )
    CHOICES = [("s", "small"), ("m", "medium"), ("l", "large")]
    size = forms.ChoiceField(choices=CHOICES, widget=forms.RadioSelect)
    # size = forms.CharField(choices=CHOICES, widget=forms.RadioSelect)
    MEAL = [("P", "Pepperoni"), ("M", "Mashroom"), ("B", "Beef")]
    pizza = forms.MultipleChoiceField(choices=MEAL, widget=forms.CheckboxSelectMultiple)


class StudentData(forms.Form):
    name = forms.CharField(widget=forms.TextInput)
    email = forms.CharField(widget=forms.EmailInput)
    # def clean_name(self):
    #     valname = self.cleaned_data["name"]
    #     if len(valname) < 10:
    #         raise forms.ValidationError("Enter a name with at least 10 character")
    #     return valname

    def clean(self):
        cleaned_data = super().clean()
        valname = self.cleaned_data["name"]
        valemail = self.cleaned_data["email"]
        if len(valname) < 10:
            raise forms.ValidationError("Enter a name with at least 10 characters")
        if ".com" not in valemail:
            raise forms.ValidationError("Your email must contain .com")
