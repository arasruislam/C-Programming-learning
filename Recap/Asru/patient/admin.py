from django.contrib import admin
from .models import Patient


# Register your models here.
class PatientAdmin(admin.ModelAdmin):
    list_display = ["get_fist_name", "get_last_name", "mobile_no", "image"]

    def get_fist_name(self, obj):
        return obj.user.first_name

    def get_last_name(self, obj):
        return obj.user.last_name


admin.site.register(Patient, PatientAdmin)
