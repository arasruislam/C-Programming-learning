from django.contrib import admin
from . import models


# Register your models here.
class CategoryAdmin(admin.ModelAdmin):
    prepopulated_fields = {"slug": ("name",)}
    list_display = ["name", "slug"]


# Final work is to register
admin.site.register(models.Category, CategoryAdmin)
