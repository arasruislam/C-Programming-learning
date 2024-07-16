from django.contrib import admin
from .models import Doctor, AvailableTime, Specialization, Designation, Review

# Register your models here.
admin.site.register(AvailableTime)


class SpecializationAdmin(admin.ModelAdmin):
    prepopulated_fields = {
        "slug": ("name",),
    }
    list_display = ["name", "slug"]


class DesignationAdmin(admin.ModelAdmin):
    prepopulated_fields = {
        "slug": ("name",),
    }
    list_display = ["name", "slug"]

admin.site.register(Specialization, SpecializationAdmin)
admin.site.register(Designation, DesignationAdmin)
admin.site.register(Doctor)
admin.site.register(Review)
