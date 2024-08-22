from django.urls import path, include
from rest_framework.routers import DefaultRouter
from . import views

router = DefaultRouter()
router.register(r"list", views.DoctorViewSet)
router.register(r"available_time", views.AvailableTimeViewSet)
router.register(r"specialization", views.SpecializationViewSet)
router.register(r"designation", views.DesignationViewSet)
router.register(r"review", views.ReviewViewSet)


urlpatterns = [
    path("", include(router.urls)),
]
