from rest_framework import serializers
from django.contrib.auth.models import User
from .models import Doctor, AvailableTime, Specialization, Designation, Review


class UserSerializer(serializers.ModelSerializer):
    class Meta:
        model = User
        fields = [
            "username",
            "first_name",
            "last_name",
            "email",
            "is_active",
            "last_login",
            "date_joined",
        ]


class AvailableTimeSerializer(serializers.ModelSerializer):

    class Meta:
        model = AvailableTime
        fields = "__all__"


class SpecializationSerializer(serializers.ModelSerializer):

    class Meta:
        model = Specialization
        fields = "__all__"


class DesignationSerializer(serializers.ModelSerializer):

    class Meta:
        model = Designation
        fields = "__all__"


class ReviewSerializer(serializers.ModelSerializer):

    class Meta:
        model = Review
        fields = "__all__"


class DoctorSerializer(serializers.ModelSerializer):
    user = UserSerializer()
    specialization = serializers.SlugRelatedField(
        many=True, read_only=True, slug_field="name"
    )
    designation = serializers.SlugRelatedField(
        many=True, read_only=True, slug_field="name"
    )
    available_time = serializers.SlugRelatedField(
        many=True, read_only=True, slug_field="name"
    )

    class Meta:
        model = Doctor
        fields = "__all__"
